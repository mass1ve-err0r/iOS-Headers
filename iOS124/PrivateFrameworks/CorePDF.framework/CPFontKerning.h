//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CorePDF/CPDisposable-Protocol.h>

__attribute__((visibility("hidden")))
@interface CPFontKerning : NSObject <CPDisposable>
{
    struct __CFData *kernTable;
    const char *dataPtr;
    unsigned int offset;
    unsigned int kernTableLength;
    struct __CFDictionary *kernDictionary;
    _Bool override;
    _Bool valid;
}

- (struct __CFDictionary *)createKernTable;
- (void)doTable;
- (void)doOTSubtable;
- (void)doTTSubtable;
- (void)doSubtableFormat3;
- (void)doSubtableFormat2;
- (void)doSubtableFormat1;
- (void)doSubtableFormat0;
- (void)doKerningPair;
- (unsigned int)readUnsignedLong;
- (short)readShort;
- (unsigned short)readUnsignedShort;
- (unsigned char)readByte;
- (void)dealloc;
- (void)finalize;
- (void)dispose;
- (id)initWithCGFont:(struct CGFont *)arg1;
- (id)initWithKernData:(struct __CFData *)arg1;

@end

