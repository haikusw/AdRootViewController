//
//  iAdsTestAppDelegate.h
//  iAdsTest
//
//  Created by Jose Andrade on 2/1/11.
//  Copyright __MyCompanyName__ 2011. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AdRootViewController;

@interface iAdsTestAppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	AdRootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

@end
