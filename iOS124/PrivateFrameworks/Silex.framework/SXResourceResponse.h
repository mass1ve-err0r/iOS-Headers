//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString, NSURL;

@interface SXResourceResponse : NSObject
{
    NSString *_resourceIdentifier;
    NSURL *_fileURL;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain, nonatomic) NSString *resourceIdentifier; // @synthesize resourceIdentifier=_resourceIdentifier;
- (void).cxx_destruct;

@end

