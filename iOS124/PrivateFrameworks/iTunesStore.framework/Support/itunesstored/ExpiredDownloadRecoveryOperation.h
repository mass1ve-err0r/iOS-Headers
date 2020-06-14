//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class SSMemoryEntity;

@interface ExpiredDownloadRecoveryOperation : ISOperation
{
    SSMemoryEntity *_download;
    CDUnknownBlockType _outputBlock;
}

+ (_Bool)canAttemptRecoveryWithError:(id)arg1;
- (void).cxx_destruct;
- (void)run;
@property(copy) CDUnknownBlockType outputBlock;
- (id)initWithDownloadIdentifier:(long long)arg1 databaseSession:(id)arg2;

@end

