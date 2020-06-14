//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableString;

@interface PBTextWriter : NSObject
{
    _Bool _newlinesPrinted;
    long long _indent;
    NSMutableString *_dest;
    NSMutableDictionary *_cachedObjectTypes;
}

- (_Bool)_write:(id)arg1;
- (_Bool)write:(id)arg1;
- (void)_writeResult:(id)arg1 forProperty:(id)arg2 bracePrefix:(id)arg3;
- (void)_writePropertyAndValue:(id)arg1 forObject:(id)arg2;
- (void)_printNewlines;
- (void)_printLine:(_Bool)arg1 format:(id)arg2;
- (void)_closeBrace;
- (void)_openBrace;
- (void)_outdent;
- (void)_indent;
- (void)reset;
- (id)string;
- (void)dealloc;
- (id)init;

@end

