//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SFCodingOptions;

@interface SFDecoder : NSObject
{
    id _decoderInternal;
}

- (void).cxx_destruct;
@property(copy, nonatomic) SFCodingOptions *options;
- (id)decodeValueOfType:(Class)arg1 fromData:(id)arg2 error:(id)arg3;
- (id)initWithOptions:(id)arg1;

@end

