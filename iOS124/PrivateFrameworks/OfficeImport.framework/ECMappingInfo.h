//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ECMappingInfo : NSObject
{
    NSString *mSheetName;
}

+ (id)mappingInfoWithSheetName:(id)arg1;
@property(readonly, nonatomic) NSString *sheetName; // @synthesize sheetName=mSheetName;
@property(readonly, nonatomic) int columnOffset;
@property(readonly, nonatomic) int rowOffset;
- (void)dealloc;
- (id)initWithSheetName:(id)arg1;

@end

