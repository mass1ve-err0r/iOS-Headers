//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol BCSAction;

__attribute__((visibility("hidden")))
@interface BCSNotificationIcon : NSObject
{
    id <BCSAction> _action;
}

+ (id)NFCCodeSectionIcon;
+ (id)QRCodeSectionIcon;
- (void).cxx_destruct;
- (id)_notificationIconDataForApp:(id)arg1 constraints:(id)arg2;
- (id)_notificationIconDataForImage:(struct CGImage *)arg1 constraints:(id)arg2;
- (id)imageDataForConstraints:(id)arg1;
- (id)initWithAction:(id)arg1;

@end

