//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSTTableDataObject.h>

@interface TSTTableDataCustomFormat : TSTTableDataObject
{
    struct TSUCustomFormat *mCustomFormat;
}

- (void)dealloc;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initObjectWithCustomFormat:(struct TSUCustomFormat *)arg1;

@end

