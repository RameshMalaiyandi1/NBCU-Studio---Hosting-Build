//
//  EmailComposer.h
//
//  Version 1.1
//
//  Created by iGATE in 2013.
//

#import <Foundation/Foundation.h>
#import <MessageUI/MFMailComposeViewController.h>
#import <Cordova/CDVPlugin.h>


@interface Screenshot : CDVPlugin <MFMailComposeViewControllerDelegate> {
    
    
}

// UNCOMMENT THIS METHOD if you want to use the plugin with versions of cordova < 2.2.0
- (void) showScreenshot:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;

// COMMENT THIS METHOD if you want to use the plugin with versions of cordova < 2.2.0
//- (void) showEmailComposer:(CDVInvokedUrlCommand*)command;


- (NSString*)saveImage:(UIImage*)image;
@end