//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MFSQLiteConnection;

@interface _MFSQLiteConnectionWrapper : NSObject
{
    MFSQLiteConnection *_connection;
    unsigned long long _generation;
    unsigned long long _type;
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) unsigned long long generation; // @synthesize generation=_generation;
@property(readonly, nonatomic) MFSQLiteConnection *connection; // @synthesize connection=_connection;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 generation:(unsigned long long)arg2;

@end

