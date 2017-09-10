//
//  ViewController.m
//  BCObjCExam
//
//  Created by Joon Jang on 8/31/17.
//  Copyright © 2017 Beasts. All rights reserved.
//

#import "ViewController.h"
#import <BeastComponents/BeastComponents-Swift.h>

@interface ViewController () <BCCoverFlowViewDataSource, BCCoverFlowViewDelegate>

@property (weak, nonatomic) IBOutlet BCCoverFlowView *coverFlowView;

@end

@implementation ViewController

- (void)viewDidLoad {
	[super viewDidLoad];

	[self.coverFlowView registerWithNib:[UINib nibWithNibName:@"MoviePoster" bundle:nil] forCoverReuseIdentifier:@"MoviePoster"];
	
	self.coverFlowView.gradientColorForStream = UIColor.blackColor;
	
	[self.coverFlowView reloadData];
}


- (void)didReceiveMemoryWarning {
	[super didReceiveMemoryWarning];
	// Dispose of any resources that can be recreated.
}

- (NSInteger)numberOfCoversIn:(BCCoverFlowView *)coverFlowView {
	return 1;
}

- (BCCoverContentView *)coverFlowView:(BCCoverFlowView *)coverFlowView contentAt:(NSInteger)index {
	
}

@end
