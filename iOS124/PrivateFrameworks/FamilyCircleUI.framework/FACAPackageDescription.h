//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface FACAPackageDescription : NSObject
{
    _Bool _flipsForRightToLeftLayoutDirection;
    NSURL *_packageURL;
}

+ (id)descriptionForPackageNamed:(id)arg1 inBundle:(id)arg2;
@property(readonly, copy, nonatomic) NSURL *packageURL; // @synthesize packageURL=_packageURL;
@property(nonatomic) _Bool flipsForRightToLeftLayoutDirection; // @synthesize flipsForRightToLeftLayoutDirection=_flipsForRightToLeftLayoutDirection;
- (void).cxx_destruct;
- (id)initWithPackageName:(id)arg1 inBundle:(id)arg2;

@end

