//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import "ISOperationDelegate-Protocol.h"

@class FinishDownloadMemoryEntity, NSString;

@interface FinishDownloadOperation : ISOperation <ISOperationDelegate>
{
    FinishDownloadMemoryEntity *_download;
    NSString *_handlerReleasedDownloadPhase;
    NSString *_initialDownloadPhase;
    CDUnknownBlockType _outputBlock;
    long long _stopResult;
}

- (void).cxx_destruct;
- (id)_stepOperations;
- (id)_finishResult:(long long)arg1;
- (void)_sendProgressToDelegate:(id)arg1;
- (_Bool)_needsDRMOperationForDownloadKind:(id)arg1;
- (id)_downloadSessionPropertiesWithDownloadPhase:(id)arg1;
- (void)operation:(id)arg1 updatedProgress:(id)arg2;
- (void)run;
- (void)stopWithFinishResult:(long long)arg1;
@property(copy) CDUnknownBlockType outputBlock;
@property(copy, nonatomic) NSString *initialDownloadPhase;
@property(copy, nonatomic) NSString *handlerReleasedDownloadPhase;
@property(readonly, nonatomic) long long downloadIdentifier;
- (id)initWithDownloadIdentifier:(long long)arg1 databaseSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

