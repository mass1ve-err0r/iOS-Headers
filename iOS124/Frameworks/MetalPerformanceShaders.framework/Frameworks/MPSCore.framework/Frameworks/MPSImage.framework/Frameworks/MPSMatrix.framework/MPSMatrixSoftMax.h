//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSMatrix/MPSMatrixUnaryKernel.h>

@interface MPSMatrixSoftMax : MPSMatrixUnaryKernel
{
    unsigned long long _sourceColumns;
    unsigned long long _sourceRows;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(nonatomic) unsigned long long sourceRows; // @synthesize sourceRows=_sourceRows;
@property(nonatomic) unsigned long long sourceColumns; // @synthesize sourceColumns=_sourceColumns;
- (id)debugDescription;
- (void)encodeToCommandBuffer:(id)arg1 inputMatrix:(id)arg2 resultMatrix:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1;

@end

