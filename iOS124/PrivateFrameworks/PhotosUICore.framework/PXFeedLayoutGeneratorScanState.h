//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PXFeedLayoutGeneratorScanState : NSObject
{
    _Bool _scannedBatchHasCaption;
    long long _scanLocation;
    id _scannedBatchID;
    long long _scanSpecialSequenceCount;
}

@property(nonatomic) long long scanSpecialSequenceCount; // @synthesize scanSpecialSequenceCount=_scanSpecialSequenceCount;
@property(nonatomic) _Bool scannedBatchHasCaption; // @synthesize scannedBatchHasCaption=_scannedBatchHasCaption;
@property(retain, nonatomic) id scannedBatchID; // @synthesize scannedBatchID=_scannedBatchID;
@property(nonatomic) long long scanLocation; // @synthesize scanLocation=_scanLocation;
- (void).cxx_destruct;

@end

