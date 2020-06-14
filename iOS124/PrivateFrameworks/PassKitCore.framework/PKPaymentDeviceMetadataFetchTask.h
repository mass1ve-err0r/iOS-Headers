//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PKPaymentDeviceMetadata;

@interface PKPaymentDeviceMetadataFetchTask : NSObject
{
    PKPaymentDeviceMetadata *_deviceMetadata;
    unsigned long long _remaningFields;
    unsigned long long _requestedFields;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) unsigned long long requestedFields; // @synthesize requestedFields=_requestedFields;
@property(nonatomic) unsigned long long remaningFields; // @synthesize remaningFields=_remaningFields;
@property(retain, nonatomic) PKPaymentDeviceMetadata *deviceMetadata; // @synthesize deviceMetadata=_deviceMetadata;
- (void).cxx_destruct;

@end

