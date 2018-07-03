Pod::Spec.new do |s|

  s.name         = "IStation_iOS_SDK"
  s.version      = "1.0.1"
  s.license      = { :"type" => "Copyright", :"text" => " Copyright 2018 Sykes \n"}
  s.homepage     = "http://onesykes.com/"
  s.author       = { 'sunyan' => 'yansun2006@126.com' }
  s.summary      = "iStation客服访客端 iOS SDK."

  s.platform     = :ios
  s.ios.deployment_target  = '8.0'

  s.source       = { :git => "https://github.com/sykesiStation/IStation_iOS_SDK.git", :tag => "#{s.version}" }

  s.resource  = ['IStationSDK/IStationResource.bundle']
  s.vendored_frameworks = 'IStationSDK/*.{framework}'
  
  s.framework = 'UIKit','MobileCoreServices','SystemConfiguration','AVFoundation','CoreGraphics','ImageIO','CoreFoundation','UserNotifications'
  s.libraries = 'stdc++.6.0.9'

  s.requires_arc = true
  s.dependency 'Socket.IO-Client-Swift', '~> 13.2.1'

  s.xcconfig = { 'OTHER_LDFLAGS' => '-ObjC' }
  s.pod_target_xcconfig = { 'SWIFT_VERSION' => '4.0' }

end
