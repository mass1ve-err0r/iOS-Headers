//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSArray.h>

@interface NSArray (NSArray)
+ (id)newWithContentsOf:(id)arg1 immutable:(_Bool)arg2;
+ (id)arrayWithContentsOfURL:(id)arg1 error:(id *)arg2;
+ (id)arrayWithContentsOfURL:(id)arg1;
+ (id)arrayWithContentsOfFile:(id)arg1;
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;
- (_Bool)writeToURL:(id)arg1 atomically:(_Bool)arg2;
- (_Bool)writeToFile:(id)arg1 atomically:(_Bool)arg2;
- (id)_stringToWrite;
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)sortedArrayUsingSelector:(SEL)arg1 hint:(id)arg2;
- (id)sortedArrayUsingFunction:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2 hint:(id)arg3;
- (id)sortedArrayHint;
- (Class)classForCoder;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)debugDescription;
@end

