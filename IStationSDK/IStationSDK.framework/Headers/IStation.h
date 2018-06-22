//
//  WSKSDK.h
//  IStationSDK
//
//  Created by 焱 孙 on 16/7/28.
//  Copyright © 2016年 焱 孙. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IStationChatViewController.h"
#import "IStationUserVo.h"
#import "IStationUIConfig.h"

/**
 *  完成回调
 */
typedef void(^IStationCompletionBlock)(void);

/**
 *  所有SDK接口都从此类获得
 */
@interface IStationSDK : NSObject

/**
 *  返回 SDK 单例
 *
 *  @return SDK 单例
 */
+ (instancetype)sharedSDK;

/**
 *  注册SDK
 *
 *  @param appKey  appKey 对应管理后台分配的appkey
 *  @param appName appName 对应管理后台添加一个app时填写的App名称
 */
- (void)registerAppKey:(NSString *)appKey appName:(NSString *)appName;

/**
 *  返回客服聊天ViewController，必须嵌入到UINavigationController中
 *
 *  @return 会话ViewController
 */
- (IStationChatViewController *)chatViewController;

/**
 *  返回自定义UI类,通过此类可以设置chatViewController内的界面效果
 *
 *  @return 自定义UI类
 */
- (IStationUIConfig *)customUIConfig;

/**
 *  更新推送token
 *
 *  @param token 推送token
 */
- (void)updateApnsToken:(NSData *)token;

/**
 *  注销当前账号。用户帐号注销时需要调用此函数；
 *
 *  @param completion 完成回调
 */
- (void)logout:(IStationCompletionBlock)completion;

/**
 *  设置个人信息。用户帐号登录成功之后，调用此函数
 *
 *  @param userVo 个人信息
 */
- (void)setUserInfo:(IStationUserVo *)userVo;

/**
 *  设置调试模式获取更多的Log信息，发布应用时建议不开启，用于节省性能开销
 */
- (void)setDebugMode;

@end
