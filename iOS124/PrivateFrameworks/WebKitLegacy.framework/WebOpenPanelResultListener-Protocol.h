//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKitLegacy/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol WebOpenPanelResultListener <NSObject>
- (void)chooseFilenames:(NSArray *)arg1 displayString:(NSString *)arg2 iconImage:(struct CGImage *)arg3;
- (void)chooseFilename:(NSString *)arg1 displayString:(NSString *)arg2 iconImage:(struct CGImage *)arg3;
- (void)cancel;
- (void)chooseFilenames:(NSArray *)arg1;
- (void)chooseFilename:(NSString *)arg1;
@end

