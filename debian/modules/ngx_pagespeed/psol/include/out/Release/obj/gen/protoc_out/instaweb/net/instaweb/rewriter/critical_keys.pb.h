// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: net/instaweb/rewriter/critical_keys.proto

#ifndef PROTOBUF_net_2finstaweb_2frewriter_2fcritical_5fkeys_2eproto__INCLUDED
#define PROTOBUF_net_2finstaweb_2frewriter_2fcritical_5fkeys_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

namespace net_instaweb {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_net_2finstaweb_2frewriter_2fcritical_5fkeys_2eproto();
void protobuf_AssignDesc_net_2finstaweb_2frewriter_2fcritical_5fkeys_2eproto();
void protobuf_ShutdownFile_net_2finstaweb_2frewriter_2fcritical_5fkeys_2eproto();

class CriticalKeys;
class CriticalKeys_KeyEvidence;
class CriticalKeys_PendingNonce;

// ===================================================================

class CriticalKeys_KeyEvidence : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:net_instaweb.CriticalKeys.KeyEvidence) */ {
 public:
  CriticalKeys_KeyEvidence();
  virtual ~CriticalKeys_KeyEvidence();

  CriticalKeys_KeyEvidence(const CriticalKeys_KeyEvidence& from);

  inline CriticalKeys_KeyEvidence& operator=(const CriticalKeys_KeyEvidence& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_.GetNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  inline ::std::string* mutable_unknown_fields() {
    return _unknown_fields_.MutableNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  static const CriticalKeys_KeyEvidence& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const CriticalKeys_KeyEvidence* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(CriticalKeys_KeyEvidence* other);

  // implements Message ----------------------------------------------

  inline CriticalKeys_KeyEvidence* New() const { return New(NULL); }

  CriticalKeys_KeyEvidence* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const CriticalKeys_KeyEvidence& from);
  void MergeFrom(const CriticalKeys_KeyEvidence& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(CriticalKeys_KeyEvidence* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _arena_ptr_;
  }
  inline ::google::protobuf::Arena* MaybeArenaPtr() const {
    return _arena_ptr_;
  }
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional bytes key = 1;
  bool has_key() const;
  void clear_key();
  static const int kKeyFieldNumber = 1;
  const ::std::string& key() const;
  void set_key(const ::std::string& value);
  void set_key(const char* value);
  void set_key(const void* value, size_t size);
  ::std::string* mutable_key();
  ::std::string* release_key();
  void set_allocated_key(::std::string* key);

  // optional int32 support = 2;
  bool has_support() const;
  void clear_support();
  static const int kSupportFieldNumber = 2;
  ::google::protobuf::int32 support() const;
  void set_support(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:net_instaweb.CriticalKeys.KeyEvidence)
 private:
  inline void set_has_key();
  inline void clear_has_key();
  inline void set_has_support();
  inline void clear_has_support();

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr key_;
  ::google::protobuf::int32 support_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_net_2finstaweb_2frewriter_2fcritical_5fkeys_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_net_2finstaweb_2frewriter_2fcritical_5fkeys_2eproto();
  #endif
  friend void protobuf_AssignDesc_net_2finstaweb_2frewriter_2fcritical_5fkeys_2eproto();
  friend void protobuf_ShutdownFile_net_2finstaweb_2frewriter_2fcritical_5fkeys_2eproto();

  void InitAsDefaultInstance();
  static CriticalKeys_KeyEvidence* default_instance_;
};
// -------------------------------------------------------------------

class CriticalKeys_PendingNonce : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:net_instaweb.CriticalKeys.PendingNonce) */ {
 public:
  CriticalKeys_PendingNonce();
  virtual ~CriticalKeys_PendingNonce();

  CriticalKeys_PendingNonce(const CriticalKeys_PendingNonce& from);

  inline CriticalKeys_PendingNonce& operator=(const CriticalKeys_PendingNonce& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_.GetNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  inline ::std::string* mutable_unknown_fields() {
    return _unknown_fields_.MutableNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  static const CriticalKeys_PendingNonce& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const CriticalKeys_PendingNonce* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(CriticalKeys_PendingNonce* other);

  // implements Message ----------------------------------------------

  inline CriticalKeys_PendingNonce* New() const { return New(NULL); }

  CriticalKeys_PendingNonce* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const CriticalKeys_PendingNonce& from);
  void MergeFrom(const CriticalKeys_PendingNonce& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(CriticalKeys_PendingNonce* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _arena_ptr_;
  }
  inline ::google::protobuf::Arena* MaybeArenaPtr() const {
    return _arena_ptr_;
  }
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int64 timestamp_ms = 1;
  bool has_timestamp_ms() const;
  void clear_timestamp_ms();
  static const int kTimestampMsFieldNumber = 1;
  ::google::protobuf::int64 timestamp_ms() const;
  void set_timestamp_ms(::google::protobuf::int64 value);

  // optional string nonce = 2;
  bool has_nonce() const;
  void clear_nonce();
  static const int kNonceFieldNumber = 2;
  const ::std::string& nonce() const;
  void set_nonce(const ::std::string& value);
  void set_nonce(const char* value);
  void set_nonce(const char* value, size_t size);
  ::std::string* mutable_nonce();
  ::std::string* release_nonce();
  void set_allocated_nonce(::std::string* nonce);

  // @@protoc_insertion_point(class_scope:net_instaweb.CriticalKeys.PendingNonce)
 private:
  inline void set_has_timestamp_ms();
  inline void clear_has_timestamp_ms();
  inline void set_has_nonce();
  inline void clear_has_nonce();

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int64 timestamp_ms_;
  ::google::protobuf::internal::ArenaStringPtr nonce_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_net_2finstaweb_2frewriter_2fcritical_5fkeys_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_net_2finstaweb_2frewriter_2fcritical_5fkeys_2eproto();
  #endif
  friend void protobuf_AssignDesc_net_2finstaweb_2frewriter_2fcritical_5fkeys_2eproto();
  friend void protobuf_ShutdownFile_net_2finstaweb_2frewriter_2fcritical_5fkeys_2eproto();

  void InitAsDefaultInstance();
  static CriticalKeys_PendingNonce* default_instance_;
};
// -------------------------------------------------------------------

class CriticalKeys : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:net_instaweb.CriticalKeys) */ {
 public:
  CriticalKeys();
  virtual ~CriticalKeys();

  CriticalKeys(const CriticalKeys& from);

  inline CriticalKeys& operator=(const CriticalKeys& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_.GetNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  inline ::std::string* mutable_unknown_fields() {
    return _unknown_fields_.MutableNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  static const CriticalKeys& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const CriticalKeys* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(CriticalKeys* other);

  // implements Message ----------------------------------------------

  inline CriticalKeys* New() const { return New(NULL); }

  CriticalKeys* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const CriticalKeys& from);
  void MergeFrom(const CriticalKeys& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(CriticalKeys* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _arena_ptr_;
  }
  inline ::google::protobuf::Arena* MaybeArenaPtr() const {
    return _arena_ptr_;
  }
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  typedef CriticalKeys_KeyEvidence KeyEvidence;
  typedef CriticalKeys_PendingNonce PendingNonce;

  // accessors -------------------------------------------------------

  // optional int64 next_beacon_timestamp_ms = 4;
  bool has_next_beacon_timestamp_ms() const;
  void clear_next_beacon_timestamp_ms();
  static const int kNextBeaconTimestampMsFieldNumber = 4;
  ::google::protobuf::int64 next_beacon_timestamp_ms() const;
  void set_next_beacon_timestamp_ms(::google::protobuf::int64 value);

  // repeated .net_instaweb.CriticalKeys.KeyEvidence key_evidence = 5;
  int key_evidence_size() const;
  void clear_key_evidence();
  static const int kKeyEvidenceFieldNumber = 5;
  const ::net_instaweb::CriticalKeys_KeyEvidence& key_evidence(int index) const;
  ::net_instaweb::CriticalKeys_KeyEvidence* mutable_key_evidence(int index);
  ::net_instaweb::CriticalKeys_KeyEvidence* add_key_evidence();
  ::google::protobuf::RepeatedPtrField< ::net_instaweb::CriticalKeys_KeyEvidence >*
      mutable_key_evidence();
  const ::google::protobuf::RepeatedPtrField< ::net_instaweb::CriticalKeys_KeyEvidence >&
      key_evidence() const;

  // repeated .net_instaweb.CriticalKeys.PendingNonce pending_nonce = 6;
  int pending_nonce_size() const;
  void clear_pending_nonce();
  static const int kPendingNonceFieldNumber = 6;
  const ::net_instaweb::CriticalKeys_PendingNonce& pending_nonce(int index) const;
  ::net_instaweb::CriticalKeys_PendingNonce* mutable_pending_nonce(int index);
  ::net_instaweb::CriticalKeys_PendingNonce* add_pending_nonce();
  ::google::protobuf::RepeatedPtrField< ::net_instaweb::CriticalKeys_PendingNonce >*
      mutable_pending_nonce();
  const ::google::protobuf::RepeatedPtrField< ::net_instaweb::CriticalKeys_PendingNonce >&
      pending_nonce() const;

  // optional int32 maximum_possible_support = 7 [default = 1];
  bool has_maximum_possible_support() const;
  void clear_maximum_possible_support();
  static const int kMaximumPossibleSupportFieldNumber = 7;
  ::google::protobuf::int32 maximum_possible_support() const;
  void set_maximum_possible_support(::google::protobuf::int32 value);

  // optional int64 valid_beacons_received = 8;
  bool has_valid_beacons_received() const;
  void clear_valid_beacons_received();
  static const int kValidBeaconsReceivedFieldNumber = 8;
  ::google::protobuf::int64 valid_beacons_received() const;
  void set_valid_beacons_received(::google::protobuf::int64 value);

  // optional int64 nonces_recently_expired = 9;
  bool has_nonces_recently_expired() const;
  void clear_nonces_recently_expired();
  static const int kNoncesRecentlyExpiredFieldNumber = 9;
  ::google::protobuf::int64 nonces_recently_expired() const;
  void set_nonces_recently_expired(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:net_instaweb.CriticalKeys)
 private:
  inline void set_has_next_beacon_timestamp_ms();
  inline void clear_has_next_beacon_timestamp_ms();
  inline void set_has_maximum_possible_support();
  inline void clear_has_maximum_possible_support();
  inline void set_has_valid_beacons_received();
  inline void clear_has_valid_beacons_received();
  inline void set_has_nonces_recently_expired();
  inline void clear_has_nonces_recently_expired();

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int64 next_beacon_timestamp_ms_;
  ::google::protobuf::RepeatedPtrField< ::net_instaweb::CriticalKeys_KeyEvidence > key_evidence_;
  ::google::protobuf::RepeatedPtrField< ::net_instaweb::CriticalKeys_PendingNonce > pending_nonce_;
  ::google::protobuf::int64 valid_beacons_received_;
  ::google::protobuf::int64 nonces_recently_expired_;
  ::google::protobuf::int32 maximum_possible_support_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_net_2finstaweb_2frewriter_2fcritical_5fkeys_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_net_2finstaweb_2frewriter_2fcritical_5fkeys_2eproto();
  #endif
  friend void protobuf_AssignDesc_net_2finstaweb_2frewriter_2fcritical_5fkeys_2eproto();
  friend void protobuf_ShutdownFile_net_2finstaweb_2frewriter_2fcritical_5fkeys_2eproto();

  void InitAsDefaultInstance();
  static CriticalKeys* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// CriticalKeys_KeyEvidence

// optional bytes key = 1;
inline bool CriticalKeys_KeyEvidence::has_key() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CriticalKeys_KeyEvidence::set_has_key() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CriticalKeys_KeyEvidence::clear_has_key() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CriticalKeys_KeyEvidence::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_key();
}
inline const ::std::string& CriticalKeys_KeyEvidence::key() const {
  // @@protoc_insertion_point(field_get:net_instaweb.CriticalKeys.KeyEvidence.key)
  return key_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CriticalKeys_KeyEvidence::set_key(const ::std::string& value) {
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:net_instaweb.CriticalKeys.KeyEvidence.key)
}
inline void CriticalKeys_KeyEvidence::set_key(const char* value) {
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:net_instaweb.CriticalKeys.KeyEvidence.key)
}
inline void CriticalKeys_KeyEvidence::set_key(const void* value, size_t size) {
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:net_instaweb.CriticalKeys.KeyEvidence.key)
}
inline ::std::string* CriticalKeys_KeyEvidence::mutable_key() {
  set_has_key();
  // @@protoc_insertion_point(field_mutable:net_instaweb.CriticalKeys.KeyEvidence.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CriticalKeys_KeyEvidence::release_key() {
  // @@protoc_insertion_point(field_release:net_instaweb.CriticalKeys.KeyEvidence.key)
  clear_has_key();
  return key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CriticalKeys_KeyEvidence::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    set_has_key();
  } else {
    clear_has_key();
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:net_instaweb.CriticalKeys.KeyEvidence.key)
}

// optional int32 support = 2;
inline bool CriticalKeys_KeyEvidence::has_support() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CriticalKeys_KeyEvidence::set_has_support() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CriticalKeys_KeyEvidence::clear_has_support() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CriticalKeys_KeyEvidence::clear_support() {
  support_ = 0;
  clear_has_support();
}
inline ::google::protobuf::int32 CriticalKeys_KeyEvidence::support() const {
  // @@protoc_insertion_point(field_get:net_instaweb.CriticalKeys.KeyEvidence.support)
  return support_;
}
inline void CriticalKeys_KeyEvidence::set_support(::google::protobuf::int32 value) {
  set_has_support();
  support_ = value;
  // @@protoc_insertion_point(field_set:net_instaweb.CriticalKeys.KeyEvidence.support)
}

// -------------------------------------------------------------------

// CriticalKeys_PendingNonce

// optional int64 timestamp_ms = 1;
inline bool CriticalKeys_PendingNonce::has_timestamp_ms() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CriticalKeys_PendingNonce::set_has_timestamp_ms() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CriticalKeys_PendingNonce::clear_has_timestamp_ms() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CriticalKeys_PendingNonce::clear_timestamp_ms() {
  timestamp_ms_ = GOOGLE_LONGLONG(0);
  clear_has_timestamp_ms();
}
inline ::google::protobuf::int64 CriticalKeys_PendingNonce::timestamp_ms() const {
  // @@protoc_insertion_point(field_get:net_instaweb.CriticalKeys.PendingNonce.timestamp_ms)
  return timestamp_ms_;
}
inline void CriticalKeys_PendingNonce::set_timestamp_ms(::google::protobuf::int64 value) {
  set_has_timestamp_ms();
  timestamp_ms_ = value;
  // @@protoc_insertion_point(field_set:net_instaweb.CriticalKeys.PendingNonce.timestamp_ms)
}

// optional string nonce = 2;
inline bool CriticalKeys_PendingNonce::has_nonce() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CriticalKeys_PendingNonce::set_has_nonce() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CriticalKeys_PendingNonce::clear_has_nonce() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CriticalKeys_PendingNonce::clear_nonce() {
  nonce_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_nonce();
}
inline const ::std::string& CriticalKeys_PendingNonce::nonce() const {
  // @@protoc_insertion_point(field_get:net_instaweb.CriticalKeys.PendingNonce.nonce)
  return nonce_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CriticalKeys_PendingNonce::set_nonce(const ::std::string& value) {
  set_has_nonce();
  nonce_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:net_instaweb.CriticalKeys.PendingNonce.nonce)
}
inline void CriticalKeys_PendingNonce::set_nonce(const char* value) {
  set_has_nonce();
  nonce_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:net_instaweb.CriticalKeys.PendingNonce.nonce)
}
inline void CriticalKeys_PendingNonce::set_nonce(const char* value, size_t size) {
  set_has_nonce();
  nonce_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:net_instaweb.CriticalKeys.PendingNonce.nonce)
}
inline ::std::string* CriticalKeys_PendingNonce::mutable_nonce() {
  set_has_nonce();
  // @@protoc_insertion_point(field_mutable:net_instaweb.CriticalKeys.PendingNonce.nonce)
  return nonce_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CriticalKeys_PendingNonce::release_nonce() {
  // @@protoc_insertion_point(field_release:net_instaweb.CriticalKeys.PendingNonce.nonce)
  clear_has_nonce();
  return nonce_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CriticalKeys_PendingNonce::set_allocated_nonce(::std::string* nonce) {
  if (nonce != NULL) {
    set_has_nonce();
  } else {
    clear_has_nonce();
  }
  nonce_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), nonce);
  // @@protoc_insertion_point(field_set_allocated:net_instaweb.CriticalKeys.PendingNonce.nonce)
}

// -------------------------------------------------------------------

// CriticalKeys

// optional int64 next_beacon_timestamp_ms = 4;
inline bool CriticalKeys::has_next_beacon_timestamp_ms() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CriticalKeys::set_has_next_beacon_timestamp_ms() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CriticalKeys::clear_has_next_beacon_timestamp_ms() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CriticalKeys::clear_next_beacon_timestamp_ms() {
  next_beacon_timestamp_ms_ = GOOGLE_LONGLONG(0);
  clear_has_next_beacon_timestamp_ms();
}
inline ::google::protobuf::int64 CriticalKeys::next_beacon_timestamp_ms() const {
  // @@protoc_insertion_point(field_get:net_instaweb.CriticalKeys.next_beacon_timestamp_ms)
  return next_beacon_timestamp_ms_;
}
inline void CriticalKeys::set_next_beacon_timestamp_ms(::google::protobuf::int64 value) {
  set_has_next_beacon_timestamp_ms();
  next_beacon_timestamp_ms_ = value;
  // @@protoc_insertion_point(field_set:net_instaweb.CriticalKeys.next_beacon_timestamp_ms)
}

// repeated .net_instaweb.CriticalKeys.KeyEvidence key_evidence = 5;
inline int CriticalKeys::key_evidence_size() const {
  return key_evidence_.size();
}
inline void CriticalKeys::clear_key_evidence() {
  key_evidence_.Clear();
}
inline const ::net_instaweb::CriticalKeys_KeyEvidence& CriticalKeys::key_evidence(int index) const {
  // @@protoc_insertion_point(field_get:net_instaweb.CriticalKeys.key_evidence)
  return key_evidence_.Get(index);
}
inline ::net_instaweb::CriticalKeys_KeyEvidence* CriticalKeys::mutable_key_evidence(int index) {
  // @@protoc_insertion_point(field_mutable:net_instaweb.CriticalKeys.key_evidence)
  return key_evidence_.Mutable(index);
}
inline ::net_instaweb::CriticalKeys_KeyEvidence* CriticalKeys::add_key_evidence() {
  // @@protoc_insertion_point(field_add:net_instaweb.CriticalKeys.key_evidence)
  return key_evidence_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::net_instaweb::CriticalKeys_KeyEvidence >*
CriticalKeys::mutable_key_evidence() {
  // @@protoc_insertion_point(field_mutable_list:net_instaweb.CriticalKeys.key_evidence)
  return &key_evidence_;
}
inline const ::google::protobuf::RepeatedPtrField< ::net_instaweb::CriticalKeys_KeyEvidence >&
CriticalKeys::key_evidence() const {
  // @@protoc_insertion_point(field_list:net_instaweb.CriticalKeys.key_evidence)
  return key_evidence_;
}

// repeated .net_instaweb.CriticalKeys.PendingNonce pending_nonce = 6;
inline int CriticalKeys::pending_nonce_size() const {
  return pending_nonce_.size();
}
inline void CriticalKeys::clear_pending_nonce() {
  pending_nonce_.Clear();
}
inline const ::net_instaweb::CriticalKeys_PendingNonce& CriticalKeys::pending_nonce(int index) const {
  // @@protoc_insertion_point(field_get:net_instaweb.CriticalKeys.pending_nonce)
  return pending_nonce_.Get(index);
}
inline ::net_instaweb::CriticalKeys_PendingNonce* CriticalKeys::mutable_pending_nonce(int index) {
  // @@protoc_insertion_point(field_mutable:net_instaweb.CriticalKeys.pending_nonce)
  return pending_nonce_.Mutable(index);
}
inline ::net_instaweb::CriticalKeys_PendingNonce* CriticalKeys::add_pending_nonce() {
  // @@protoc_insertion_point(field_add:net_instaweb.CriticalKeys.pending_nonce)
  return pending_nonce_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::net_instaweb::CriticalKeys_PendingNonce >*
CriticalKeys::mutable_pending_nonce() {
  // @@protoc_insertion_point(field_mutable_list:net_instaweb.CriticalKeys.pending_nonce)
  return &pending_nonce_;
}
inline const ::google::protobuf::RepeatedPtrField< ::net_instaweb::CriticalKeys_PendingNonce >&
CriticalKeys::pending_nonce() const {
  // @@protoc_insertion_point(field_list:net_instaweb.CriticalKeys.pending_nonce)
  return pending_nonce_;
}

// optional int32 maximum_possible_support = 7 [default = 1];
inline bool CriticalKeys::has_maximum_possible_support() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void CriticalKeys::set_has_maximum_possible_support() {
  _has_bits_[0] |= 0x00000008u;
}
inline void CriticalKeys::clear_has_maximum_possible_support() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void CriticalKeys::clear_maximum_possible_support() {
  maximum_possible_support_ = 1;
  clear_has_maximum_possible_support();
}
inline ::google::protobuf::int32 CriticalKeys::maximum_possible_support() const {
  // @@protoc_insertion_point(field_get:net_instaweb.CriticalKeys.maximum_possible_support)
  return maximum_possible_support_;
}
inline void CriticalKeys::set_maximum_possible_support(::google::protobuf::int32 value) {
  set_has_maximum_possible_support();
  maximum_possible_support_ = value;
  // @@protoc_insertion_point(field_set:net_instaweb.CriticalKeys.maximum_possible_support)
}

// optional int64 valid_beacons_received = 8;
inline bool CriticalKeys::has_valid_beacons_received() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void CriticalKeys::set_has_valid_beacons_received() {
  _has_bits_[0] |= 0x00000010u;
}
inline void CriticalKeys::clear_has_valid_beacons_received() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void CriticalKeys::clear_valid_beacons_received() {
  valid_beacons_received_ = GOOGLE_LONGLONG(0);
  clear_has_valid_beacons_received();
}
inline ::google::protobuf::int64 CriticalKeys::valid_beacons_received() const {
  // @@protoc_insertion_point(field_get:net_instaweb.CriticalKeys.valid_beacons_received)
  return valid_beacons_received_;
}
inline void CriticalKeys::set_valid_beacons_received(::google::protobuf::int64 value) {
  set_has_valid_beacons_received();
  valid_beacons_received_ = value;
  // @@protoc_insertion_point(field_set:net_instaweb.CriticalKeys.valid_beacons_received)
}

// optional int64 nonces_recently_expired = 9;
inline bool CriticalKeys::has_nonces_recently_expired() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void CriticalKeys::set_has_nonces_recently_expired() {
  _has_bits_[0] |= 0x00000020u;
}
inline void CriticalKeys::clear_has_nonces_recently_expired() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void CriticalKeys::clear_nonces_recently_expired() {
  nonces_recently_expired_ = GOOGLE_LONGLONG(0);
  clear_has_nonces_recently_expired();
}
inline ::google::protobuf::int64 CriticalKeys::nonces_recently_expired() const {
  // @@protoc_insertion_point(field_get:net_instaweb.CriticalKeys.nonces_recently_expired)
  return nonces_recently_expired_;
}
inline void CriticalKeys::set_nonces_recently_expired(::google::protobuf::int64 value) {
  set_has_nonces_recently_expired();
  nonces_recently_expired_ = value;
  // @@protoc_insertion_point(field_set:net_instaweb.CriticalKeys.nonces_recently_expired)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace net_instaweb

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_net_2finstaweb_2frewriter_2fcritical_5fkeys_2eproto__INCLUDED
