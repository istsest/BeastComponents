//
//  BCCoverContentView.h
//  BeastComponents
//
//  Created by Joon Jang on 9/9/17.
//  Copyright © 2017 Beast. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BCCoverContentView_objc : UIView

@property (strong, readonly) NSString *reuseIdentifier;
@property (assign, nonatomic) CGFloat scale;

- (void)prepareForReuse;
- (void)adjustTopBounds;

@end
