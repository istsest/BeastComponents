Pod::Spec.new do |s|
  s.name         = "BeastComponent"
  s.version      = "0.1.1"
  s.summary      = "Beast Component"
  s.homepage     = "https://github.com/istsest/BeastComponents"
  s.author       = { "Joon Jang" => "stsest@gmail.com" }
  s.platform     = :ios
  s.source       = { :git => "https://github.com/istsest/BeastComponents.git", :tag => "0.1.1" }
  s.source_files =  'BeastComponents/BeastComponents.framework/Headers/*.h'
  s.vendored_frameworks = 'BeastComponents/BeastComponents.framework'
  s.ios.deployment_target = '8.0'
  s.frameworks = 'UIKit', 'Foundation', 'SystemConfiguration'
  s.requires_arc = true
  s.xcconfig  =  { 'LIBRARY_SEARCH_PATHS' => '"$(PODS_ROOT)/BeastComponents"',
                   'HEADER_SEARCH_PATHS' => '"${PODS_ROOT}/Headers/BeastComponents"' }
  s.license      = {
    :type => 'Copyright',
    :text => <<-LICENSE
      Copyright 2017 Beasts. All rights reserved.
      LICENSE
  }
end
