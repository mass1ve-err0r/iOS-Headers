//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface TSUZipWriterEntry : NSObject
{
    unsigned int _CRC;
    NSString *_name;
    NSDate *_lastModificationDate;
    unsigned long long _size;
    unsigned long long _offset;
}

@property(nonatomic) unsigned int CRC; // @synthesize CRC=_CRC;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSDate *lastModificationDate; // @synthesize lastModificationDate=_lastModificationDate;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

