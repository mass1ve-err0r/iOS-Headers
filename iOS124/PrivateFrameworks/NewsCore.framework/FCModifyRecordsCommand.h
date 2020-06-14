//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCCommand.h>

@class NSArray;

@interface FCModifyRecordsCommand : FCCommand
{
    _Bool _merge;
    CDUnknownBlockType _localRecordsGenerator;
    NSArray *_localRecords;
}

+ (_Bool)supportsSecureCoding;
+ (id)desiredKeys;
@property(nonatomic) _Bool merge; // @synthesize merge=_merge;
@property(copy, nonatomic) NSArray *localRecords; // @synthesize localRecords=_localRecords;
@property(copy, nonatomic) CDUnknownBlockType localRecordsGenerator; // @synthesize localRecordsGenerator=_localRecordsGenerator;
- (void).cxx_destruct;
- (void)handleBatchOfLocalRecords:(id)arg1 internalPrivateDataContext:(id)arg2 qualityOfService:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)handleLocalRecordsFromStream:(id)arg1 internalPrivateDataContext:(id)arg2 delegate:(id)arg3 qualityOfService:(long long)arg4;
- (void)coalesceWithCommand:(id)arg1;
- (_Bool)canCoalesceWithCommand:(id)arg1;
- (void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3;
@property(readonly, nonatomic) NSArray *t_localRecords;
- (_Bool)mergeLocalRecord:(id)arg1 withRemoteRecord:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalRecords:(id)arg1 merge:(_Bool)arg2;
- (id)initWithLocalRecordsGenerator:(CDUnknownBlockType)arg1 merge:(_Bool)arg2;
- (id)init;

@end

