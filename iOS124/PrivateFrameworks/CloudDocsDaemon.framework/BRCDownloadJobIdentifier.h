//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCJobIdentifying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BRCDownloadJobIdentifier : NSObject <BRCJobIdentifying>
{
    int _kind;
    unsigned long long _itemDBRowID;
    NSString *_etag;
}

@property(readonly, nonatomic) int kind; // @synthesize kind=_kind;
@property(readonly, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(readonly, nonatomic) unsigned long long itemDBRowID; // @synthesize itemDBRowID=_itemDBRowID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToDownloadJobIdentifier:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)columnsValues;
- (id)columns;
- (id)matchingJobsWhereSQLClause;
@property(readonly, copy) NSString *description;
- (id)jobsDescription;
- (id)initWithDBRowID:(unsigned long long)arg1 etag:(id)arg2 kind:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

