//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSException.h>

@class TCMessageEntry;

__attribute__((visibility("hidden")))
@interface TCMessageException : NSException
{
    TCMessageEntry *m_entry;
}

+ (id)nsError:(id)arg1 domain:(id)arg2;
+ (void)raiseUntaggedMessage:(id)arg1;
+ (void)raise:(id)arg1;
+ (id)exceptionWithUntaggedMessage:(id)arg1;
+ (id)exceptionWithMessage:(id)arg1;
+ (void)initialize;
- (id)description;
- (id)getEntry;
- (void)dealloc;
- (id)initWithUntaggedMessage:(id)arg1;
- (id)initWithMessage:(id)arg1;

@end

