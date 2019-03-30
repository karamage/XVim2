//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTProvisioningProfile.h>

@class DVTFilePath, DVTPlatform, NSArray, NSDate, NSDictionary, NSSet, NSString;

@interface DVTMockProvisioningProfile : DVTProvisioningProfile
{
    BOOL _isUniversalMock;
    BOOL _appleInternalMock;
    BOOL _xcodeManagedMock;
    BOOL _isActiveMock;
    NSArray *_signingCertificatesMock;
    NSDate *_creationDateMock;
    NSDate *_expirationDateMock;
    NSString *_UUIDMock;
    NSString *_nameMock;
    NSDictionary *_entitlementsMock;
    NSSet *_supportedUDIDsMock;
    NSString *_teamIDMock;
    NSString *_teamNameMock;
    NSString *_appIdentifierEntitlementMock;
    NSArray *_appIdentifierPrefixesMock;
    NSArray *_teamIdentifierPrefixesMock;
    DVTPlatform *_platformMock;
    NSString *_appIdentifierNameMock;
    DVTFilePath *_filePathMock;
}

@property(retain) DVTFilePath *filePathMock; // @synthesize filePathMock=_filePathMock;
@property(retain) NSString *appIdentifierNameMock; // @synthesize appIdentifierNameMock=_appIdentifierNameMock;
@property(nonatomic) BOOL isActiveMock; // @synthesize isActiveMock=_isActiveMock;
@property(nonatomic, getter=isXcodeManaged) BOOL xcodeManagedMock; // @synthesize xcodeManagedMock=_xcodeManagedMock;
@property(nonatomic, getter=isAppleInternalMock) BOOL appleInternalMock; // @synthesize appleInternalMock=_appleInternalMock;
@property(retain) DVTPlatform *platformMock; // @synthesize platformMock=_platformMock;
@property(retain) NSArray *teamIdentifierPrefixesMock; // @synthesize teamIdentifierPrefixesMock=_teamIdentifierPrefixesMock;
@property(retain) NSArray *appIdentifierPrefixesMock; // @synthesize appIdentifierPrefixesMock=_appIdentifierPrefixesMock;
@property(retain) NSString *appIdentifierEntitlementMock; // @synthesize appIdentifierEntitlementMock=_appIdentifierEntitlementMock;
@property(retain) NSString *teamNameMock; // @synthesize teamNameMock=_teamNameMock;
@property(retain) NSString *teamIDMock; // @synthesize teamIDMock=_teamIDMock;
@property(retain) NSSet *supportedUDIDsMock; // @synthesize supportedUDIDsMock=_supportedUDIDsMock;
@property BOOL isUniversalMock; // @synthesize isUniversalMock=_isUniversalMock;
@property(retain) NSDictionary *entitlementsMock; // @synthesize entitlementsMock=_entitlementsMock;
@property(retain) NSString *nameMock; // @synthesize nameMock=_nameMock;
@property(retain) NSString *UUIDMock; // @synthesize UUIDMock=_UUIDMock;
@property(retain) NSDate *expirationDateMock; // @synthesize expirationDateMock=_expirationDateMock;
@property(retain) NSDate *creationDateMock; // @synthesize creationDateMock=_creationDateMock;
@property(retain) NSArray *signingCertificatesMock; // @synthesize signingCertificatesMock=_signingCertificatesMock;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)longDescription;
- (BOOL)matchesEntitlements:(id)arg1 nonMatchingKeys:(id *)arg2;
- (BOOL)matchesBundleIdentifier:(id)arg1;
- (id)appIdentifierEntitlement;
- (BOOL)usesExplicitAppIdentifier;
- (id)appIdentifierEntitlementWithoutPrefix;
- (long long)dateCompare:(id)arg1;
- (long long)localizedCompare:(id)arg1;
- (long long)compare:(id)arg1;
- (BOOL)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)dataRepresentation;
- (id)filePath;
- (BOOL)hasCertificateMatchingIdentity:(id)arg1 includeExpired:(BOOL)arg2;
- (id)identityCertificates;
- (BOOL)containsCertificate:(struct OpaqueSecCertificateRef *)arg1;
- (id)certificates;
- (id)preferredFilenameExtension;
- (int)version;
- (BOOL)isActive;
- (BOOL)isAppleInternal;
- (id)platforms;
- (id)teamIdentifierPrefixes;
- (id)appIdentifierName;
- (id)appIdentifierPrefixes;
- (id)teamName;
- (id)teamID;
- (id)supportedUDIDs;
- (BOOL)isUniversal;
- (id)entitlements;
- (id)name;
- (id)UUID;
- (id)dateExpired;
- (id)dateCreated;
- (id)certificateKind;
- (id)certificateSHA1Hashes;
- (id)signingCertificates;
- (BOOL)canBeInstalledOnDevice:(id)arg1;
- (BOOL)canBeInstalledOnDeviceWithIdentifier:(id)arg1;
- (BOOL)containsSigningCertificate:(id)arg1;
- (void)validate;
- (id)description;
- (id)initWithDictionary:(id)arg1 certTable:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)initWithPlist:(id)arg1;
- (id)init;

@end
