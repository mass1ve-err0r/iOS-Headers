//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSUDelimitedValuesParser : NSObject
{
    unsigned short *_buffer;
    unsigned long long _bufferLength;
    unsigned short _separator;
    _Bool _freeWhenDone;
    CDStruct_6d33b4ba _columnRowSize;
    _Bool _isSizeSet;
}

+ (_Bool)coerceString:(id)arg1 withLocale:(id)arg2 toCurrencyFormat:(CDStruct_730f14de *)arg3 value:(double *)arg4;
+ (_Bool)coerceString:(id)arg1 withLocale:(id)arg2 toNumberFormat:(CDStruct_730f14de *)arg3 value:(double *)arg4;
@property(readonly, nonatomic) unsigned long long bufferSize; // @synthesize bufferSize=_bufferLength;
- (CDStruct_6d33b4ba)parseColumnRowSizeWithSeparator:(unsigned short)arg1;
- (CDStruct_6d33b4ba)parseColumnRowSize;
- (void)parseRawStringsWithBlock:(CDUnknownBlockType)arg1;
- (void)parseStringsWithBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) CDStruct_6d33b4ba columnRowSize;
- (void)dealloc;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsFromProvider:(id)arg1;
- (id)initWithString:(id)arg1 separator:(unsigned short)arg2;
- (id)initWithBuffer:(unsigned short *)arg1 length:(unsigned long long)arg2 separator:(unsigned short)arg3 freeWhenDone:(_Bool)arg4;

@end

