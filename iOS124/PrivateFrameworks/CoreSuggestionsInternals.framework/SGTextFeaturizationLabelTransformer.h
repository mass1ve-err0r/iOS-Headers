//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/PMLTransformerProtocol-Protocol.h>

@class NSArray, SGStringLabellingTransformer;

@interface SGTextFeaturizationLabelTransformer : NSObject <PMLTransformerProtocol>
{
    NSArray *_methods;
    SGStringLabellingTransformer *_stringLabellingTransformer;
}

+ (id)_preprocessedLabelsWithLabels:(id)arg1 withTransformer:(id)arg2;
+ (id)withMethods:(id)arg1 withLabelStrings:(id)arg2;
- (void).cxx_destruct;
- (id)transform:(id)arg1;
- (id)initWithMethods:(id)arg1 withLabelStrings:(id)arg2;

@end

