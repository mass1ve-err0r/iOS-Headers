//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INSpeakableString;

@protocol INCreateTimerIntentExport <NSObject, JSExport>
@property(nonatomic) double duration;
@property(copy, nonatomic) INSpeakableString *label;
- (id)init;
@end

