//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLBuffer, MTLDevice;

@interface MPSMatrix : NSObject
{
    struct MPSDevice *_device;
    unsigned long long _rows;
    unsigned long long _columns;
    unsigned long long _matrices;
    unsigned long long _rowBytes;
    unsigned long long _matrixBytes;
    unsigned int _dataType;
    struct MPSAutoBuffer _buffer;
}

@property(readonly, nonatomic) unsigned int dataType; // @synthesize dataType=_dataType;
@property(readonly, nonatomic) unsigned long long matrixBytes; // @synthesize matrixBytes=_matrixBytes;
@property(readonly, nonatomic) unsigned long long rowBytes; // @synthesize rowBytes=_rowBytes;
@property(readonly, nonatomic) unsigned long long matrices; // @synthesize matrices=_matrices;
@property(readonly, nonatomic) unsigned long long columns; // @synthesize columns=_columns;
@property(readonly, nonatomic) unsigned long long rows; // @synthesize rows=_rows;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)synchronizeOnCommandBuffer:(id)arg1;
- (id)debugDescription;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) id <MTLBuffer> data;
- (unsigned long long)resourceSize;
- (id)initWithDevice:(id)arg1 descriptor:(id)arg2;
- (id)initWithBuffer:(id)arg1 descriptor:(id)arg2;
- (id)initPrivateWithDescriptor:(id)arg1 device:(struct MPSDevice *)arg2;
- (id)init;
@property(readonly, retain, nonatomic) id <MTLDevice> device;

@end

