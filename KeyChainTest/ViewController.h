//
//  ViewController.h
//  KeyChainTest
//
//  Created by csdc-iMac on 15/8/31.
//  Copyright (c) 2015年 csdc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (strong, nonatomic) IBOutlet UITextField *usernameLabel;
@property (strong, nonatomic) IBOutlet UITextField *passwordLabel;

- (IBAction)login:(id)sender;

@end

