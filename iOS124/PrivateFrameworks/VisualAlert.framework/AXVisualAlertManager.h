//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXVisualAlertManager : NSObject
{
    int ringerStateNotifyToken;
}

+ (id)sharedVisualAlertManager;
@property(nonatomic) int ringerStateNotifyToken; // @synthesize ringerStateNotifyToken;
- (void)removeBulletin:(id)arg1;
- (id)existingBulletinForBulletin:(id)arg1;
- (void)addBulletin:(id)arg1;
- (void)stop;
- (void)startForAlertTypes:(unsigned long long)arg1 cameraTorchManager:(id)arg2;

@end

