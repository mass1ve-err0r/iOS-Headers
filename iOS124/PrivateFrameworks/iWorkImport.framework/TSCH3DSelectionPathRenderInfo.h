//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSCH3DSelectionPathRenderInfo : NSObject
{
    NSString *mString;
    unsigned long long mStyleIndex;
    double mRotation;
}

+ (id)renderInfoWithString:(id)arg1 styleIndex:(unsigned long long)arg2 rotation:(double)arg3;
@property(readonly, nonatomic) double rotation; // @synthesize rotation=mRotation;
@property(readonly, nonatomic) unsigned long long styleIndex; // @synthesize styleIndex=mStyleIndex;
@property(readonly, nonatomic) NSString *string; // @synthesize string=mString;
- (void)dealloc;
- (id)initWithString:(id)arg1 styleIndex:(unsigned long long)arg2 rotation:(double)arg3;

@end

