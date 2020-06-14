//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EventKit/EKCancellableRemoteOperation-Protocol.h>

@class EKEventStore, NSNumber, NSSet, NSString;

@interface EKOccurrenceCacheSearch : NSObject <EKCancellableRemoteOperation>
{
    NSSet *_calendars;
    NSString *_searchTerm;
    EKEventStore *_store;
    CDUnknownBlockType _callback;
    NSNumber *_replyID;
    _Bool _canceled;
}

+ (id)searchWithCalendars:(id)arg1 searchTerm:(id)arg2 store:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
- (id)searchTerm;
- (void)receivedBatchResultsFromServer:(id)arg1 finished:(_Bool)arg2;
- (void)disconnect;
- (void)cancel;
- (void)run;
- (int)performSearchOperation:(unsigned int)arg1 inCalendars:(id)arg2 withEventStore:(id)arg3 andSearchTerm:(id)arg4;
- (id)initWithCalendars:(id)arg1 searchTerm:(id)arg2 store:(id)arg3 callback:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

