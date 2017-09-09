//
//  ViewController.m
//  BCObjCExam
//
//  Created by Joon Jang on 8/31/17.
//  Copyright © 2017 Beasts. All rights reserved.
//

#import "ViewController.h"
#import <BeastComponents/BeastComponents-Swift.h>

@interface ViewController ()

@property (weak, nonatomic) IBOutlet BCCoverFlowView *coverFlowView;

@end

@implementation ViewController

- (void)viewDidLoad {
	[super viewDidLoad];

	[self.coverFlowView reloadData];
}


- (void)didReceiveMemoryWarning {
	[super didReceiveMemoryWarning];
	// Dispose of any resources that can be recreated.
}


@end
