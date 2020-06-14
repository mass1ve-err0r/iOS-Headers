//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSMatrix/MPSMatrixUnaryKernel.h>

@interface MPSMatrixDecompositionCholesky : MPSMatrixUnaryKernel
{
    _Bool _lower;
    unsigned long long _order;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(readonly, nonatomic) _Bool lower; // @synthesize lower=_lower;
@property(readonly, nonatomic) unsigned long long order; // @synthesize order=_order;
- (void)encodeToCommandBuffer:(id)arg1 sourceMatrix:(id)arg2 resultMatrix:(id)arg3 status:(id)arg4;
- (id)initWithDevice:(id)arg1 lower:(_Bool)arg2 order:(unsigned long long)arg3;

@end

