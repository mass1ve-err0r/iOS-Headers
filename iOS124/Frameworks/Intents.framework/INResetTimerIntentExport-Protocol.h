//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INTimer, NSNumber;

@protocol INResetTimerIntentExport <NSObject, JSExport>
@property(copy, nonatomic) NSNumber *resetMultiple;
@property(copy, nonatomic) INTimer *targetTimer;
- (id)init;
@end

