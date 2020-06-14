//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol NUSizer;

@interface NULayoutContextSizer : NSObject
{
    id <NUSizer> _sizer;
    NSArray *_attributes;
}

@property(readonly, nonatomic) NSArray *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) id <NUSizer> sizer; // @synthesize sizer=_sizer;
- (void).cxx_destruct;
- (id)description;
- (_Bool)matchForLayoutContext:(id)arg1;
- (id)initWithSizer:(id)arg1 attributes:(id)arg2;

@end

