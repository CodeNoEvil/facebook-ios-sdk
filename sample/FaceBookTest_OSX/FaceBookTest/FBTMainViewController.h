//
//  FBTMainViewController.h
//  FaceBookTest
//
//  Created by David Bitton on 3/15/12.
//  Copyright (c) 2012 Code No Evil LLC. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <FacebookOSXSDK/FBConnect.h>

@interface FBTMainViewController : NSViewController <FBRequestDelegate, FBDialogDelegate, FBSessionDelegate>

@property (copy) NSArray *permissions;

@property (unsafe_unretained) IBOutlet NSButton *loginButton;

- (IBAction)toggleState:(id)sender;

@end
