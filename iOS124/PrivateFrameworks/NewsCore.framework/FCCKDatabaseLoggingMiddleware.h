//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCCKDatabaseOperationMiddleware-Protocol.h>

@class NSString;

@interface FCCKDatabaseLoggingMiddleware : NSObject <FCCKDatabaseOperationMiddleware>
{
    _Bool _allowNilDesiredKeys;
}

@property(nonatomic) _Bool allowNilDesiredKeys; // @synthesize allowNilDesiredKeys=_allowNilDesiredKeys;
- (void)_addLoggersToOperation:(id)arg1 database:(id)arg2;
- (long long)database:(id)arg1 willEnqueueOperation:(id)arg2;
- (id)initAllowingNilDesiredKeys:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

