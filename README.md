# Beast Components
- UI components for iOS by beasts.
- Language: Swift 3.0
- Minimum required iOS version: 9.0

## Components
- Beast Cover Flow View
- Beast Rating Bar

## Beast Cover Flow View
- Cover-flow style view.
- Very similar interfaces with UITableView or UICollectionView.
- Transitions for navigating or presenting and dismissing detail page view.

### Demo Video
[![Beast Cover Flow Demo Video](http://img.youtube.com/vi/1DE4vRYZg5s/0.jpg)](http://www.youtube.com/watch?v=1DE4vRYZg5s)

### Example
[Cover Flow View Example](CoverFlowExample.md)

## Beast Rating Bar
- Rating bar view with stars.
- You don't have to use image for stars.
- It uses vector and scakes by view size.

### Demo Video
[![Beast Rating Bar Demo Video](http://img.youtube.com/vi/lohwEBkbvhE/0.jpg)](http://www.youtube.com/watch?v=lohwEBkbvhE)

### Example
[Rating Bar Example](RatingBarExample.md)

### How to use
- pod ‘BeastComponents’, :git => “https://github.com/istsest/BeastComponents.git” (in Podfile)
- pod install (on Terminal)

# NOTE
- The podspec is working with Ruby 2.3.0, so need to install it
- Newer version of OSX deprecated OpenSSL, so need to install OpenSSL before ruby.
  Use following command when install ruby with rvm:
    rvm reinstall 2.3.0 --with-openssl-dir=\`brew --prefix openssl\`
  * I assume that OpenSSL is installed with brew, if not you have to specify the directory.
