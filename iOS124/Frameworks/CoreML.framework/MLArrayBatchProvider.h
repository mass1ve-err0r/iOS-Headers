//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreML/MLBatchProvider-Protocol.h>

@class NSArray;

@interface MLArrayBatchProvider : NSObject <MLBatchProvider>
{
    NSArray *_array;
}

@property(readonly, nonatomic) NSArray *array; // @synthesize array=_array;
- (void).cxx_destruct;
- (id)featuresAtIndex:(long long)arg1;
@property(readonly, nonatomic) long long count;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (id)initWithFeatureProviderArray:(id)arg1;

@end

