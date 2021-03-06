//
//  AppDelegate.h
//  GitNotify
//
//  Created by Max Lam on 7/22/13.
//  Copyright (c) 2013 Max Lam. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GNGithubApi.h"
#import "GNRepoVC.h"
#import "GNDatabaseAPI.h"
#import "GNLoginVC.h"

@class GNLoginVC;

@interface AppDelegate : UIResponder <UIApplicationDelegate, UINavigationControllerDelegate> {
    GNRepoVC *repoVC;
    GNLoginVC *loginVC;
}

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) NSDictionary *user;

-(void)update;
-(void)updateDatabase:(NSArray *)userArray;
-(BOOL)login:(NSString *)username andPassword:(NSString *)password;
-(void)transitionToRepositories;

@end
