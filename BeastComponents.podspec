Pod::Spec.new do |s|
  s.name         = "BeastComponents"
  s.version      = "1.0.0"
  s.summary      = "Beast Component"
  s.homepage     = "https://github.com/istsest/BeastComponents"
  s.author       = { "Joon Jang" => "istsest@gmail.com" }
  s.platform     = :ios
  s.source       = { :git => "https://github.com/istsest/BeastComponents.git", :tag => s.version.to_s }
  s.source_files =  'BeastComponents/BeastComponents.framework/Headers/*.h'
  s.vendored_frameworks = 'BeastComponents/BeastComponents.framework'
  s.resource = "BeastComponents/BeastComponentsBundle.bundle"
  s.ios.deployment_target = '9.0'
  s.frameworks = 'UIKit', 'Foundation', 'SystemConfiguration'
  s.requires_arc = true
  s.xcconfig  =  { 'LIBRARY_SEARCH_PATHS' => '"$(PODS_ROOT)"',
                   'HEADER_SEARCH_PATHS' => '"${PODS_ROOT}/Headers/BeastComponents"' }
  s.license      = {
    :type => 'Copyright',
    :text => <<-LICENSE
      Copyright 2017 Beasts. All rights reserved.
      LICENSE
  }
end
