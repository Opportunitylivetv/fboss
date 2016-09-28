#include "fboss/qsfp_service/QsfpServiceHandler.h"

namespace facebook { namespace fboss {

QsfpServiceHandler::QsfpServiceHandler() :
    FacebookBase2("QsfpService") {
}

facebook::fb303::cpp2::fb_status QsfpServiceHandler::getStatus() {
  return facebook::fb303::cpp2::fb_status::ALIVE;
}

TransceiverType QsfpServiceHandler::type(int16_t idx) {
  return TransceiverType::QSFP;
}

void QsfpServiceHandler::getTransceiverInfo(TransceiverInfo& info,
    int16_t idx) {
}

bool QsfpServiceHandler::isTransceiverPresent(int16_t idx) {
  return true;
}

void QsfpServiceHandler::updateTransceiverInfoFields(int16_t idx) {
}

void QsfpServiceHandler::customizeTransceiver(int16_t idx,
    cfg::cpp2::PortSpeed speed) {
}
}} // facebook::fboss
