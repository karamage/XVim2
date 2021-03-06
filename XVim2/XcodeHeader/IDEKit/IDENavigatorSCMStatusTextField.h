//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTStructuredLayoutTextField.h>

@class NSString;

@interface IDENavigatorSCMStatusTextField : DVTStructuredLayoutTextField
{
    long long _backgroundStyle;
}

+ (id)keyPathsForValuesAffectingHasDisplayableStatus;
+ (Class)cellClass;
+ (id)keyPathsForValuesAffectingHideLocalStatus;
+ (id)keyPathsForValuesAffectingServerStatus;
+ (id)keyPathsForValuesAffectingLocalStatus;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
- (BOOL)hasDisplayableStatus;
@property BOOL hideLocalStatus;
@property(copy, nonatomic) NSString *serverStatus;
@property(copy, nonatomic) NSString *localStatus;
- (BOOL)allowsVibrancy;
- (id)cell;
- (id)init;

@end

