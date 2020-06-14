//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSInputStream.h>

@interface NSInputStream (NSInputStream)
+ (id)inputStreamWithURL:(id)arg1;
+ (id)inputStreamWithFileAtPath:(id)arg1;
+ (id)inputStreamWithData:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (unsigned long long)_cfTypeID;
- (_Bool)hasBytesAvailable;
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithData:(id)arg1;
@end

