//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCH3DDataBuffer : NSObject
{
}

- (struct DataBufferLevelData)dataWithSizeGreaterOrEqualTo:(unsigned long long)arg1;
- (struct DataBufferLevelData)dataAtLevel:(unsigned long long)arg1;
- (struct DataBufferInfo)bufferInfo;
@property(readonly, nonatomic) _Bool hasLevels;
@property(readonly, nonatomic) tvec2_3b141483 size2;
@property(readonly, nonatomic) tvec3_c2818ced size;
@property(readonly, nonatomic) unsigned long long byteSize;
@property(readonly, nonatomic) unsigned long long elementByteSize;
@property(readonly, nonatomic) unsigned long long componentByteSize;
- (id)description;

@end

