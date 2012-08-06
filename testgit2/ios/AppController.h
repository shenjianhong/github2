//
//  testgit2AppController.h
//  testgit2
//
//  Created by sword on 12-8-6.
//  Copyright czCloudSoft 2012年. All rights reserved.
//

@class RootViewController;

@interface AppController : NSObject <UIAccelerometerDelegate, UIAlertViewDelegate, UITextFieldDelegate,UIApplicationDelegate> {
    UIWindow *window;
    RootViewController	*viewController;
}

@end

