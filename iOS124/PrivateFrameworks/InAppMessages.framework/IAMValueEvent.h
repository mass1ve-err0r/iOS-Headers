//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <InAppMessages/IAMEvent.h>

@protocol NSCopying;

@interface IAMValueEvent : IAMEvent
{
    id <NSCopying> value;
}

@property(copy, nonatomic) id <NSCopying> value; // @synthesize value;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 value:(id)arg2;

@end

