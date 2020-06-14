//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FinishDownloadStepOperation.h"

#import "ISOperationDelegate-Protocol.h"

@class NSString;

@interface DownloadDRMOperation : FinishDownloadStepOperation <ISOperationDelegate>
{
}

- (_Bool)_unprotectMediaAsset:(id *)arg1;
- (id)_sinfs;
- (_Bool)_decryptAsset:(id *)arg1;
- (_Bool)_checkoutRentalKeys:(id *)arg1;
- (void)operation:(id)arg1 updatedProgress:(id)arg2;
- (void)run;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

